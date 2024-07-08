class Solution {
public:
    int findTheWinner(int n, int k) {
        if (n == 1) 
            return 1; // Base case: if there's only one player, they're the winner.

        // Recursive call to find out the winner among n-1 players.
        int winner = findTheWinner(n - 1, k);

        // Adjusting the winner index for the current round, considering 0-based indexing.
        int adjustedWinner = (winner + k) % n;

        // If the adjustedWinner is 0, it implies that the winner is the nth player.
        // Otherwise, return the index considering 1-based indexing.
        return adjustedWinner == 0 ? n : adjustedWinner;
    }
};