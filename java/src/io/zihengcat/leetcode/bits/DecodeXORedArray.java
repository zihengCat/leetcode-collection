package io.zihengcat.leetcode.bits;

/**
 * LeetCode 1720. Decode XORed Array
 * https://leetcode.com/problems/decode-xored-array/
 */
public class DecodeXORedArray {
    public static void main(String[] args) {
        // ...
    }
    public int[] decode(int[] encoded, int first) {
        if (encoded == null) {
            return encoded;
        }
        int[] origin = new int[encoded.length + 1];
        origin[0] = first;
        for (int i = 1; i < origin.length; i++) {
            origin[i] = origin[i - 1] ^ encoded[i - 1];
        }
        return origin;
    }
}

/* EOF */
