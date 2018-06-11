import pandas

table, = pandas.read_html("tabla.html")

file = open('test1.json', 'w')
file. write(table.to_json())
file.close()