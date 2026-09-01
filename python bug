# app.py
from flask import Flask, request
import sqlite3

app = Flask(__name__)

@app.route("/user")
def user():
    name = request.args.get("name")

    conn = sqlite3.connect("test.db")
    query = f"SELECT * FROM users WHERE name = '{name}'"  # SQL injection
    result = conn.execute(query).fetchall()

    return str(result)

app.run()
