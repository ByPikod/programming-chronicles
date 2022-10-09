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

    attempts = 1
    check_list = {
        1: False,
        2: False,
        3: False,
        4: False,
        5: False,
        6: False
    }
    
    while True:

        rand = random.randint(1, 40)
        if rand < 7:
            check_list[rand] = True
                
        if all(check_list.values()):
            break
        
        attempts += 1
        
    total_attempts = total_attempts + attempts

# Average attempts
print(total_attempts / 10000)