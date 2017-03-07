from flask import Flask
app = Flask(__name__)

@app.route("/")
def hello():
    return "<html><head><title>Hello Flask</title> \
            <body><b>hello</b></body></html>"

@app.route("/cs50ap")
def cs50():
    return "This is CS50 AP."
    
@app.route("/name/<name>")
def greet(name):
    return "Hello, " + name

if __name__ == "__main__":
    app.run(debug=True)