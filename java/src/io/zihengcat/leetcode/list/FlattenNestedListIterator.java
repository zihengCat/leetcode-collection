package io.zihengcat.leetcode.list;

import java.util.List;
import java.util.Deque;
import java.util.Iterator;
import java.util.LinkedList;

/**
 * LeetCode 341. Flatten Nested List Iterator
 * https://leetcode.com/problems/flatten-nested-list-iterator/
 */
public class FlattenNestedListIterator {
    /**
     * Your NestedIterator object will be instantiated and called as such:
     * NestedIterator i = new NestedIterator(nestedList);
     * while (i.hasNext()) v[f()] = i.next();
     */
    public static void main(String[] args) {
        // ...
    }
}

/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 */
interface NestedInteger {

    // @return true if this NestedInteger holds a single integer, rather than a nested list.
    public boolean isInteger();

    // @return the single integer that this NestedInteger holds, if it holds a single integer
    // Return null if this NestedInteger holds a nested list
    public Integer getInteger();

    // @return the nested list that this NestedInteger holds, if it holds a nested list
    // Return empty list if this NestedInteger holds a single integer
    public List<NestedInteger> getList();
}

class NestedIterator implements Iterator<Integer> {

    private Deque<Integer> aDeque; 

    public NestedIterator(List<NestedInteger> nestedList) {
        aDeque = new LinkedList<>();
        flattenNestedList(nestedList);
    }

    @Override
    public Integer next() {
        return aDeque.poll();
    }

    @Override
    public boolean hasNext() {
        return !aDeque.isEmpty();
    }

    private void flattenNestedList(List<NestedInteger> nestedList) {
        for (int i = 0; i < nestedList.size(); i++) {
            NestedInteger currentNode = nestedList.get(i);
            if (currentNode.isInteger()) {
                aDeque.add(currentNode.getInteger());
            } else {
                flattenNestedList(currentNode.getList());
            }
        }
    }
}

/* EOF */
