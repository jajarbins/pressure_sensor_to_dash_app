from model import get_data_from_api


def get_data():
    # json_data = get_data_from_api()

    json_data = [
        {
            "id": 1,
            "pressure": 100000,
            "millis": 1000
        },
        {
            "id": 2,
            "pressure": 100100,
            "millis": 2000
        },
        {
            "id": 3,
            "pressure": 100200,
            "millis": 3000
        },
        {
            "id": 4,
            "pressure": 100300,
            "millis": 4000
        },
        {
            "id": 5,
            "pressure": 100400,
            "millis": 5000
        },

    ]

    pressure = [data['pressure'] for data in json_data]
    millis = [data['millis'] for data in json_data]
    print(pressure)
    print(millis)
    print()
    return pressure, millis


get_data()
