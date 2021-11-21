This level is not too difficult to do. first explore bandit and read every single step instructions are given in the bandit levels . so its easy to run the code and at last we need to save the passwords of each level.
0] In their website they give us the username and password for bandit0 and we have to find the password for bandit1
1] While logged into the bandit0 user profile ,I ran the “ls” command .there is a file named “readme”. I read the file using “cat readme” and it contained 1 line with the password for next level.
2] I ran "ls" I saw the file. Then I ran "cat <-" and I saw that the password for next level.
3] The password is stored in a file called spaces . I ran " cat "spaces in this filename" " and received the password for next level.
4] The password is stored in a hidden file in the inhere directory. I ran "ls" and then I ran "cd" . Then I ran "ls -a" . The hidden file is named .hidden and after running "cat .hidden" and received the password for next level.
5] The password seems to be in the -file07 file and to read it I ran "cat <-file07" and received the password for next level.
6]The password for the next level is stored somewhere on the server I used find / -user bandit7 -group bandit6 -size 33c 2>/dev/null / from root folder Command and received the password for next level.   7] I saw the data.txt fil. so I used the command cat data.txt | grep millionth to read the file
8] stored in the file data.txt  To do this I ran the command sort data.txt | uniq -u
9] stored in the file data.txt   file contains both strings and binary data which I feel difficult to read.I used the command cat data.txt | strings | grep ^= This returned 3 strings: The third one is password
10] The [data.txt ] file contains 1 line that was encoded in base64. To decode the file I ran the command cat data.txt | base64 --decode
