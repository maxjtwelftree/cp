class Solution:
    def findWinners(self, matches: List[List[int]]) -> List[List[int]]:
        winner_counter = Counter(match[0] for match in matches)
        loser_counter = Counter(match[1] for match in matches)

        gigachad = [kid for kid in winner_counter if kid not in loser_counter]
        get_better = [kid for kid, count in loser_counter.items() if count == 1]

        gigachad.sort()
        get_better.sort()
        return [gigachad, get_better]