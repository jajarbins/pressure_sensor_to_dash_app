import requests
import json
import urllib.request, json


def get_data_from_api():
    url = 'http://elec-auto-pressure.herokuapp.com/pressure/'
    response = requests.get('http://elec-auto-pressure.herokuapp.com/pressure/')
    json_data = response.json()
    return json_data


