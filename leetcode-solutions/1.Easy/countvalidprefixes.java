//question link: https://leetcode.com/problems/count-valid-prefixes/
//approach: iterate through the string and count the number of 0's and 1's, if the difference between the two counts is less than or equal to 1, increment the result
    public int countValidPrefixes(String s) {
        int zero = 0;
        int one = 0;
        int result = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '0') {
                zero++;
            } else {
                one++;
            }
            if (Math.abs(zero - one) <= 1) {
                result++;
            }
        }
        return result;
    }
}
