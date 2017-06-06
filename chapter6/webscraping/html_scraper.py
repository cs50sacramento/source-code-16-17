import bs4, requests, sys

page = requests.get('http://ide50-cs50sacramento.cs50.io:8080/')
page = bs4.BeautifulSoup(page.text, "html5lib")
    
item = page.select("table")
if item != []:
    print("Table: True")
else:
    print("Table: False")
    
item = page.select("a")
print(item)
links = []
for i in range(len(item)):
   links.append(item[i].get("href"))
print(links)

if item != []:
    print("Link: True")
else:
    print("Link: False")
    
item1 = page.button
item2 = page.input
for i in range(len(item2)):
    if item2[i].get("type") == "submit":
        input_button = True
if item != None or input_button == True:
    print("Button: True")
else:
    print("Button: False")
    
item = page.find_all("div")
ids = []
for i in range(len(item)):
    id = item[i].get("id")
    if id != None:
        ids.append(item[i].get("id"))
if ids != []:
    print("Divs: True")
else:
    print("Divs: False")

item1 = page.ul
item2 = page.ol
if item1 != None or item2 != None:
    print("List: True")
else:
    print("List: False")

item1 = page.h1
print(item1)
item2 = page.h2
print(item2)
item3 = page.h3
#print(item3)
item4 = page.h4
print(item4)
print(item4.getText())
item5 = page.h5
#print(item5)
item6 = page.h6
#print(item6)
if item1 != None or item2 != None or item3 != None or item4 != None or item5 != None or item6 != None:
    print("Heading: True")
else:
    print("Heading: False")

item = page.p
if item != None:
    print("Paragraph: True")
else:
    print("Paragraph: False")

item = page.find_all("img")

print(item)
images = []
for i in range(len(item)):
   images.append(item[i].get("src"))
print(images)

if len(item) >= 3:
    print("Image: True")
else:
    print("Image: False")