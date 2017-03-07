import sys
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

def getTweet():
    message = input("Enter your tweet here > ")
    if len(message) > 140:
        sys.exit("Tweet too long. Try again!")
    return message

def sendTweet(tweet):
    twitter.update_status(status=tweet)
    print("Tweeted: {}".format(tweet))

def main():
    message = getTweet()
    sendTweet(message)

if __name__ == "__main__":
    main()