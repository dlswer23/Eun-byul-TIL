//���� ��ȸ��
//���� �ڽ� ����

if (ptr) {
	preorder(ptr->leftchild);
	printf("%d", ptr->data);
	preorder(ptr->rightchild);
}

//���� ��ȸ��
//���� �ڽĵ� ���� ���ٰ� ������ �ڽĵ� ���ٰ�

if (ptr) {
	preorder(ptr->leftchild);
	printf("%d", ptr->rightchild);
	preorder(ptr->data);
}
