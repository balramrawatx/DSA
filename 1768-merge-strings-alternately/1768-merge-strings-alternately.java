class Solution {
    public String mergeAlternately(String word1, String word2) {
        int w1 = word1.length();
        int w2 = word2.length();
        // String merge = "";
        StringBuilder merge = new StringBuilder();
        int max = w1 > w2 ? w1 : w2;
        for (int i = 0; i < max; i++) {
            if (i<w1) {
                merge.append(word1.charAt(i));
            }
            if (i<w2) {
                merge.append(word2.charAt(i));
            }
        }
        return merge.toString();
    }
}