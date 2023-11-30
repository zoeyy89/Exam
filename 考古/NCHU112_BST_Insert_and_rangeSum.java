//Please complete the codes of the subroutine insert in Java 
//for inserting a value into the tree. (15 pt)
//Please complete the codes of the subroutine rangeSumBST in Java 
//for calculating the sum of values of all nodes with a value in the
//inclusive range [low, high]. (15 pt)

//chatGPT

import java.util.*;
import java.lang.*;
import java.io.*;

class BST {
    class TreeNode {
        int val;
        TreeNode left;
        TreeNode right;
        TreeNode(int val) {
            this.val = val;
        }
    }

    private int sum = 0;
    private TreeNode root;

    BST() {
        this.root = null;
    }

    void insert(int val) {
        root = insertNode(root, val);
    }
    
    private TreeNode insertNode(TreeNode root, int val) {
        if (root == null) {
            return new TreeNode(val);
        }
        if (val < root.val) {
            root.left = insertNode(root.left, val);
        } else if (val > root.val) {
            root.right = insertNode(root.right, val);
        }
        return root;
    }

    int rangeSumBST(int low, int high) {
        sum = 0;
        calculateRangeSum(root, low, high);
        return sum;
    }

    private void calculateRangeSum(TreeNode node, int low, int high) {
        if (node == null) {
            return;
        }
        if (node.val >= low && node.val <= high) {
            sum += node.val;
        }
        if (node.val > low) {
            calculateRangeSum(node.left, low, high);
        }
        if (node.val < high) {
            calculateRangeSum(node.right, low, high);
        }
    }

    public static void main(String[] args) {
        BST tree = new BST();
        tree.insert(50);
        tree.insert(30);
        tree.insert(20);
        tree.insert(40);
        tree.insert(70);
        tree.insert(60);
        tree.insert(80);
        System.out.println(tree.rangeSumBST(25, 65));
    }
}
