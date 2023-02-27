void puts2(char *str)
        {
int i;
           string result = " ";
            for (i = 0; i < str.length(); i++)
             {
                 if (i % 2 == 0) result += str[i];
             }
            return result;
        }
