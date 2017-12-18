========================================================================
    CONSOLE APPLICATION : StringReplaceAll Project Overview
========================================================================

Solution for the problem:

Есть длинная строка ~ 100000 символов std::string text = "some text some text dewghewghew ......." ,
необходимо заменить на символ '*', в данной строке, все вхождения следующих подстрок; "abcdef", "123456 yzq", "qwerty qwerty", "dfghjkjkl"

Files overview:
in.txt - file with input string
out.txt - file with modified string
replacements.txt - list of replacements to perform on input string formatted as:
    <word_to_replace> <new_line> <word_replace_with>
