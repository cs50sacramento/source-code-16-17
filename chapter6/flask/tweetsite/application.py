from flask import Flask, redirect, render_template, request, url_for

import os
import sys
from helpers import *
from twython import Twython
from auth import (
    consumer_key,
    consumer_secret,
    access_token,
    access_token_secret
)

twitter = Twython(
    consumer_key,
    consumer_secret,
    access_token,
    access_token_secret
)

app = Flask(__name__)

@app.route("/", methods=["GET", "POST"])
@app.route("/index", methods=["GET", "POST"])
def index():
    if request.method == "GET":
        return render_template("index.html")
    else:
        tweet = request.form.get("tweet")
        if len(tweet) > 140:
            return apology("Tweet too long!")
        twitter.update_status(status=tweet)
        return render_template("tweeted.html", tweet=tweet)