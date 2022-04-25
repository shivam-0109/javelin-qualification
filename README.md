# javelin-qualification

There are N players with IDs from 1 to N, who are participating in the Javelin throw competition which has two rounds. The first is the qualification round, followed by the final round. The qualification round has gotten over, and you are given the longest distance that each of the N players has thrown as A1,A2,…,AN. Now, the selection process for the final round happens in the following two steps:

1) If the longest throw of a player in the qualification round is greater than or equal to the qualification mark of M cm, they qualify for the final round.

2) If after step 1, less than X players have qualified for the finals, the remaining spots are filled by players who have thrown the maximum distance among the players who have not qualified yet.

You are given the best throws of the N players in the qualification round A1,A2,…,AN and the integers M and X. Print the list of the players who will qualify for the finals in increasing order of their IDs.

Sample Input 1 

3

3 8000 2

5000 5001 5002

3 5000 2

7999 7998 8000

4 6000 3

5999 5998 6000 6001

Sample Output 1 

2 2 3

3 1 2 3

3 1 3 4

Explanation

Test Case 1: Since no player crosses the qualification mark, they are chosen based on the distance thrown. So player 3 who has thrown the maximum distance gets selected followed by the player 2. Now since we have got the required number of players, player 1 isn't selected.

Test Case 2: Since all the players cross the qualification mark, they all are selected.

Test Case 3: The player 3 and player 4 cross the qualification mark. So for the third and final spot in the final, the player 1 is selected since he has the maximum distance thrown amongst the remaining two players.
