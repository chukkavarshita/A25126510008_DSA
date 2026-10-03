class BSTSearch {
    public TreeNode searchBST(TreeNode root, int val) {
        while (root != null) {
            if (root.data == val)
                return root;
            if (val < root.data)
                root = root.left;
            else
                root = root.right;
        }
        return null;
    }
}
