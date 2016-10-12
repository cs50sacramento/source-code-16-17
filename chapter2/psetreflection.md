# PSET1 REFLECTION
## With thanks to Douglas Kiang of the CS50 AP community for the idea and the structure of this activity

As I have said often, I don't care so much _when_ you learn a concept but _that_ you learn it.
This reflection activity is designed to give you the opportunity to take a step back and think about your thinking process as a programmer.
---
Here's what you should do:
* Create a document called `initials.txt` via the `touch` command.
* Open `initials.c` and select "File > Show File Revision History".
* Click the play button and watch your typing speed by.
* After watching it once, take the scroll by, and move it more slowly to watch your progress happen at a more reasonable speed.
* Log at least three "a-ha! moments" where something all of a sudden seemed clear, or you realized how to solve a problem, or you corrected a misunderstanding you had about some aspect of the assignment.
* Give the exact time of this moment along with a short (one- to two-sentence, max) description of this "a-ha moment".

Part of beginning to think like a programmer means taking that metacognitive leap to think about your own thinking. In order words, you need to ask yourself:
* How do I go about solving problems?
* What syntax do I struggle with?
* What can I do more quickly? What takes me more time?

Below is a sample for my `initials.c`:
### initials.c
9/27/16 13:22:30: I realized that `s` was an awful name for a variable. It didn't make it clear what kind of information I was storing in that string, so I changed it to `string name`.
9/27/16 13:23:26: I noticed that my return type for capitalize should be void, not int, since I'm merely printing a letter, not handing any information back to main via `return`.
10/12/16 7:58:41: I simplified my code with functions from `<ctype.h>`. Previously, I was using ASCII values to determine case of letters, but I decided that it would make my code more readable to simply use pre-defined functions instead.

Don't just repeat what you did. I want to know what your "a-ha" was, as in "I realized... " or "I figured out..." or some similiar phrase.

Bad examples:
* I moved this code up here and it worked. (Yes, but why?)
* I added a new header file. (Great, but for what function? How does this improve your design?)
* I realized you have to add a semicolon to make this line work. (This is too basic.)

Good examples:
* You ran make and it didn't work and you figured out what the problem was from the error message.
* Someone else helped you to understand something and you made a change
* Another reference source (such as CS50 Reference or the CS50 AP Portal) helped you figure out something and you made a change
* You re-watched a walkthrough video and understood some aspect of the program more fully.

Please use CS50 IDE's built-in "File Revision History" feature to sync your timestamps with your "a-ha moments."

*NOTE*: For this to work, you should do all your work in the same file. Indeed, moving forward this is going to be a key component of your grade. The programs you write for our problem sets must have an intact file revision history showing the process of your work. While this stresses academic honesty, it also allows for this kind of reflection (and it preserves the many states of your program in case you need to revert back to an earlier version at any time).

*P.S.*: I am writing this using Markdown, a cool, simple way of styling plain text files. If you feel brave and want to use the basics thereof, check out [this guide](https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet) and save your file as `initials.md` instead.