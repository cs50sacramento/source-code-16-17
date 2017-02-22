# prints the text file as is
with open("austen.txt") as lines:
    for line in lines:
        print(line, end="") 
print()
print()

# prints words that start with i
start_with_a = []

with open("austen.txt") as lines:
    for line in lines:
        if line.startswith("a"):
            line = line.strip()
            start_with_a.append(line)
print(start_with_a)       
print()

# prints all but first three lines with trailing new lines
opening_sentence_1 = []

with open("austen.txt") as lines:
    for line in lines:
        if line[0].isalpha():
            opening_sentence_1.append(line)
print(opening_sentence_1)       
print()

# prints all but first three lines without trailing new lines
opening_sentence_2 = []

with open("austen.txt") as lines:
    for line in lines:
        if line[0].isalpha():
            line = line.strip()
            opening_sentence_2.append(line)
print(opening_sentence_2)       
print()

# prints all but first three lines as its own sentence
opening_sentence_2_joined = " ".join(opening_sentence_2)
print(opening_sentence_2_joined)
print()

# prompt for feedback
user_word = input("Give me a word, and I'll tell you if it's in the opening sentence of Pride and Prejudice: ")

if user_word in opening_sentence_2:
    print("Yep!")
else:
    print("Nope!")

print("Here's how many times it appears in the sentence: ", end="")
count = 0
for word in opening_sentence_2:
    if word == user_word:
        count += 1
print(count)