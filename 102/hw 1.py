text = 'Az sum Petur. Toj e Georgi.'

glasna = 'AEIOUaeiou'
syglasna = 'BCDFGHJKLMNPQRSTVWXYZbcdfghjklmnpqrstvwxyz'
glasna_count = 0
syglasna_count = 0


for char in text:
    if char in glasna:
        glasna_count += 1
    elif char in syglasna:
        syglasna_count += 1

print(f"Number of glasni: {glasna_count}")
print(f"Number of syglasni: {syglasna_count}")

def longword(input_string):
    lengths = []
    word_length = 0
    words = []
    
    for i in range(len(input_string)):
        if input_string[i] != ' ' and input_string[i] != '.':
            word_length += 1
        else:
            if word_length > 0:
                words.append(input_string[i - word_length:i])
                lengths.append(word_length)
                word_length = 0
    
    if word_length > 0:
        words.append(input_string[-word_length:])
        lengths.append(word_length)

    return lengths, words

def maxword(lengths):

    maxlen = lengths[0]
    index = 0

    for i in range(len(lengths)):
        if lengths[i] > maxlen:
            maxlen = lengths[i]
            index = i

    return maxlen, index

word_len_arr, words_arr = longword(text)
maxlen, index = maxword(word_len_arr)

longest_word = words_arr[index] 


print(f"The longest word is: '{longest_word}'")
