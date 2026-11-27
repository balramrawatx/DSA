class Solution {
    public boolean isAnagram(String s, String t) {
        Boolean Anagram = false;
        int n1 = s.length();
        int n2 = t.length();
        if (n1!=n2) return false;
        char[] str1 = s.toCharArray();
        char[] str2 = t.toCharArray();
        Arrays.sort(str1);
        Arrays.sort(str2);
        Boolean isEqual = Arrays.equals(str1, str2);
        return isEqual;
    }
}