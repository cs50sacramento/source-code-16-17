from flask import Flask
app = Flask(__name__)

@app.route("/")
def greet():
    return "<h2>Hello, F Block!</h2>"

@app.route("/name/<name>")
def greet_student(name):
    return "<h2>" + name + " is my favorite student!</h2>"

if __name__ == "__main__":
    app.run(debug=True)
