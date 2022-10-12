#
#   This is a code that I made to learn how many times I should
#   complete the Angler quest in Terraria. It's a quest that you should
#   catch a specific fish and take it to the Angler. Which he is a fisherman boy.
#   In return, he gives some items. There is 6 neccessary items you should collect.
#   There is 6 neccessary items you should collect.
#   I've calculcated the avarage amount of quests you should complete to collect 6 items.
#
import random

total_attempts = 0
for i in range(10000):

    attempts = 0
    check_list = {i: False for i in range(6)}
    
    while not all(check_list):

        rand = random.randint(0, 39)
        if rand < 6:
            check_list[rand] = True
        
        attempts += 1
        
    total_attempts += attempts

# Average attempts
print(total_attempts / 10000)