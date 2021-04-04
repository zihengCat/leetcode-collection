package io.zihengcat.leetcode.queue;

import java.util.LinkedList;

/**
 * LeetCode 622. Design Circular Queue
 * https://leetcode.com/problems/design-circular-queue/
 */
public class DesignCircularQueue {
    public static void main(String[] args) {
        // ...
    }
}

class MyCircularQueue {

    private int currentSize;
    private int limitSize;
    private LinkedList<Integer> aQueue;

    public MyCircularQueue(int k) {
        this.limitSize = k;
        this.currentSize = 0;
        this.aQueue = new LinkedList<>();
    }

    public boolean enQueue(int value) {
        if (isFull()) {
            return false;
        }
        aQueue.offerLast(value);
        currentSize++;
        return true;
    }

    public boolean deQueue() {
        if (isEmpty()) {
            return false;
        }
        aQueue.pollFirst();
        currentSize--;
        return true;
    }

    public int Front() {
        if (isEmpty()) {
            return -1;
        }
        return aQueue.peekFirst();
    }
    
    public int Rear() {
        if (isEmpty()) {
            return -1;
        }
        return aQueue.peekLast();
    }
    
    public boolean isEmpty() {
        return currentSize == 0;
    }
    
    public boolean isFull() {
        return currentSize == limitSize;
    }
}

/* EOF */
