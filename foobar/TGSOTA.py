def countStaircases(N):

    memo = [[0 for x in range(N + 5)]
        for y in range(N + 5)]

    #initial stages.
    memo[3][2] = memo[4][2] = 1

    for i in range(5, N + 1):
        for j in range(2, i + 1):

            if (j == 2):
	            memo[i][j] = memo[i - j][j] + 1

            else:
                memo[i][j] = (memo[i - j][j] + memo[i - j][j - 1])

    for i in memo:
        print(i)

    answer = 0
    for i in range(1, N + 1):
        answer = answer + memo[N][i]

    return answer


if __name__ == "__main__":
	N = 8
	print(countStaircases(N))