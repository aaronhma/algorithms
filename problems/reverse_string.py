def reverse_string(string):
    low = 0
    high = len(string) - 1

    while low <= high:
        string[low], string[high] = string[high], string[low]

        low += 1
        high -= 1

    return string


if __name__ == "__main__":
    try:
        print(reverse_string(["h", "e", "l", "l", "o"]))
        print(reverse_string(["h", "e", "l", "l", "o",
                              " ", "w", "o", "r", "l", "d", "!"]))
        assert(reverse_string(["h", "e", "l", "l", "o"]) ==
               list(reversed(["h", "e", "l", "l", "o"])))
        assert(reverse_string(["h", "e", "l", "l", "o", " ", "w", "o", "r", "l", "d", "!"]) ==
               list(reversed(["h", "e", "l", "l", "o", " ", "w", "o", "r", "l", "d", "!"])))
        print("All tests passed!")

    except:
        print("Tests failed!")
