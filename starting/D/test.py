def flavius_josephus_function(N, a, b):
    # initialize each soldier with 0 value
    tortoise_soldier, hare_soldier = 0, 0
    count_soldier = 0

    cycle_length = 0  # Flavius Josephus cycle length

    # finding the Flavius Josephus cycle
    while True:
        # for tortoise_soldier need to take one position at a time
        tortoise_soldier = (a * tortoise_soldier * tortoise_soldier + b) % N

        # for hare_soldier need to take two position at a time
        hare_soldier = (a * hare_soldier * hare_soldier + b) % N
        hare_soldier = (a * hare_soldier * hare_soldier + b) % N

        # count
        count_soldier += 1

        if tortoise_soldier == hare_soldier:
            break

    # moving the hare and tortoise soldier for the same position
    # The number of soldiers between hare and tortoise encounters is the cycle length.
    hare_soldier = tortoise_soldier

    while True:
        # for hare at tortoise soldier need to take one position at a time
        hare_soldier = (a * hare_soldier * hare_soldier + b) % N
        cycle_length += 1

        if hare_soldier == tortoise_soldier:
            break

    # finding the number of survivors in the flavius_josephus_function
    # (by subtracting the cycle length from the total number of soldiers.)
    return N - cycle_length


if __name__ == '__main__':
    while True:
        input_list = list(map(int, input().split()))
        if input_list[0] == 0:
            break
        i = 0
        while i < len(input_list):
            if input_list[i] != 0:
                N, a, b = input_list[i:i+3]
                print(flavius_josephus_function(N, a, b))
                i += 3
            else:
                break
        i = 0
