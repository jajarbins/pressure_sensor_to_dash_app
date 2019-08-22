
import dash

from dash.dependencies import Input, Output

import dash_html_components as html
import dash_core_components as dcc

from controleur import get_data

external_stylesheets = ['https://codepen.io/chriddyp/pen/bWLwgP.css']

app = dash.Dash(__name__, external_stylesheets=external_stylesheets)

app.layout = html.Div([
    dcc.Interval(
        id="interval",
        interval=1 * 1000,  # in milliseconds
        n_intervals=0
    ),
    html.H6("Pressure"),
    html.Br(),
    dcc.Graph(id='graph')

])


@app.callback(
    Output('graph', 'figure'),
    [Input('graph', 'id'),
    Input('interval', 'n_intervals')])
def update_output(identifiant, n_intervals):

    pressure, millis = get_data()
    return {
        'data': [{
            'x': millis,
            'y': pressure,
            'type': 'scatter',
            'mode': 'markers',
        }],

    }

if __name__ == '__main__':
    app.run_server(debug=True)
