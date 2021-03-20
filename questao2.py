
def main(works):
    sentence = works.lower()

    n = len(sentence)
    i = 0
    listCount = []

    while i <= n- 1:

        # Count occurrences of 
        # current character
        count = 1
        while (i < n - 1 and sentence[i] == sentence[i + 1]):
            count += 1
            i += 1
        i += 1
 
        # Print character and its count
        # print(sentence[i - 1] + str(count), end = "")
        listCount.append(sentence[i - 1] + str(count))

    result = ''.join(listCount)

    if (len(result) > n):
        print(sentence)
    else:
        print(result)

if __name__ == "__main__":

    sentence = input()
    main(sentence)
