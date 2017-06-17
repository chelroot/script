# -*- coding: utf-8 -*-
from flask import Flask
app = Flask(__name__)

@app.route("/")
def hello():
    return "Hello World!"

@app.route('/hello')
def hello2():
    return 'Hello World 2'

@app.route('/user/<username>')
def show_user_profile(username):
    return 'User %s' % username

@app.route('/post/<int:post_id>')
def show_post(post_id):
    return 'Post %d' % post_id

if __name__ == "__main__":
    app.run(port=8080,debug=True)