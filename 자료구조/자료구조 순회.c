//중위 순회법
//왼쪽 자식 먼저

if (ptr) {
	preorder(ptr->leftchild);
	printf("%d", ptr->data);
	preorder(ptr->rightchild);
}

//후위 순회법
//왼쪽 자식들 먼저 갔다가 오른쪽 자식들 갔다가

if (ptr) {
	preorder(ptr->leftchild);
	printf("%d", ptr->rightchild);
	preorder(ptr->data);
}
