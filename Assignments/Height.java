class Height {
    public int height(TreeNode root) {
        if (root == null)
            return 0;
        int l = height(root.left);
        int r = height(root.right);
        return Math.max(l, r) + 1;
    }
}
//same as maximum depth of binary tree
