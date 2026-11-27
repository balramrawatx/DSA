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
        String sorted1 = new String(str1);
        String sorted2 = new String(str2);
        
        Boolean isEqual = sorted1.equals(sorted2);
        return isEqual;
    }
}