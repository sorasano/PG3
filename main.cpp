#include <stdio.h>
#include <stdlib.h>

//�o�������X�g�̍\���̂̒�`

typedef struct cell
{
	const char* val;
	struct cell* prev;
	struct cell* next;
} CELL;

void create(CELL* currentCell, const char* val);
void index(CELL* endCell);
void change(CELL* currentCell, const char* val);
CELL* getInsertListAddress(CELL* endCELL, int iterator);
void Delete(CELL* currentCell, int iterator);

int main() {

	//�擪�̃Z���̐錾
	CELL head;
	CELL cell1;
	CELL cell2;
	CELL cell3;

	//�Z���̐ݒ�
	head.next = &cell1;

	cell1.val = "banana";
	cell1.prev = &head;
	cell1.next = &cell2;

	cell2.val = "apple";
	cell2.prev = &cell1;
	cell2.next = &cell3;

	cell3.val = "orange";
	cell3.prev = &cell2;
	cell3.next = nullptr;

	//�V�[���؂�ւ��p
	int scene = 0;
	int inScene = 0;
	int sceneInput;
	int inSceneInput = 0;

	//���͗p
	int iterator;
	int iteratorSub;

	int num = 0;
	char inputValue[100][20];
	CELL* insertCell;
	CELL* insertCellSub;

	char cellValue[20];
	char cellSubValue[20];

	//�o�͗p
	char buf[100];

	//�v�f�����邩�ǂ���

	int isCell = 1;

	while (1)
	{


		//�v�f�����邩�ǂ���

		if (head.next == nullptr) {
			isCell = 0;
		}
		else {
			isCell = 1;
		}

		if (scene == 0 && isCell == 1) {

			printf("[�v�f�̑���]\n");
			printf("1.�v�f�̕\��\n");
			printf("2.�v�f�̑}��\n");
			printf("3.�v�f�̕ҏW\n");
			printf("4.�v�f�̍폜\n");
			printf("5.�v�f�̕��ёւ�(�I�v�V����)\n");
			printf("\n");
			printf("-------------------------------\n");
			printf("�����I�����Ă�������\n");
			scanf_s("%d", &sceneInput);

		}
		else if (scene == 0 && isCell == 0)
		{
			printf("[�v�f�̑���]\n");
			printf("1.�v�f�̕\��\n");
			printf("2.�v�f�̑}��\n");
			printf("\n");
			printf("-------------------------------\n");
			printf("�����I�����Ă�������\n");
			scanf_s("%d", &sceneInput);

		}
		else if (scene == 1) {

			if (inScene == 0) {
				printf("[�v�f�̕\��]\n");
				printf("1.�v�f�̈ꗗ�\��\n");
				printf("2.���Ԃ��w�肵�ėv�f��\��\n");
				printf("9.�v�f����ɖ߂�\n");
				printf("\n");
				printf("-------------------------------\n");
				printf("�����I�����Ă�������\n");
				scanf_s("%d", &inSceneInput);
			}
			else if (inScene == 1) {

				printf("[�v�f�̈ꗗ�\��]\n");

				//���X�g�ꗗ�̕\��
				index(&head);

				printf("}\n");
				printf("---------------------------------\n");
				printf("1.�v�f�̕\���ɖ߂�\n");
				printf("2.�v�f�̑���ɖ߂�\n");

				scanf_s("%d", &inSceneInput);
				printf("}\n");
				printf("---------------------------------\n");
			}
			else if (inScene == 2) {
				printf("[���Ԃ��w�肵�ėv�f��\��]\n");

				printf("�\���������v�f�̏��Ԃ��w�肵�Ă��������B\n");
				scanf_s("%d", &iterator);

				insertCell = getInsertListAddress(&head, iterator);
				CELL* cell = &head;
				int no = 1;

				while (cell->next != insertCell) {
					cell = cell->next;
					no++;
				}

				printf("%d:%d\n", iterator, no - 1);
				printf("}\n");
				printf("---------------------------------\n");
				printf("1.�v�f�̕\���ɖ߂�\n");
				printf("2.�v�f�̑���ɖ߂�\n");
			}

		}
		else if (scene == 2) {

			printf("[���X�g�v�f�̑}��]\n");

			printf("�v�f��ǉ�����ꏊ���w�肵�Ă��������B�Ō���ɒǉ�����ꍇ�͉������͂��Ȃ��ł��������B\n");
			scanf_s("%d", &iterator);

			printf("�ǉ�����v�f�̒l����͂��Ă�������\n");
			scanf_s("%s", inputValue[num], 20);

			if (&iterator != nullptr) {

				//�C�ӂ̃Z���̌��ɒǉ�
				insertCell = getInsertListAddress(&head, iterator - 1);
				create(insertCell, inputValue[num]);
				num++;
			}
			else {

				//���͂��Ȃ��ꍇ

				CELL* endCell = &head;
				iterator = 0;

				while (endCell->next != nullptr) {
					endCell = endCell->next;
					iterator++;
				}

				insertCell = getInsertListAddress(&head, iterator - 1);
				create(insertCell, inputValue[num]);
				num++;

			}

			printf("�v�f'%s'��%d�Ԗڂɑ}������܂���\n", inputValue[num - 1], iterator);
			printf("\n");
			printf("---------------------------------\n");

			sceneInput = 0;
		}
		else if (scene == 3) {

			printf("[�v�f�̕ҏW]\n");
			printf("�ҏW�������v�f�̔ԍ����w�肵�Ă�������\n");
			scanf_s("%d", &iterator);

			insertCell = getInsertListAddress(&head, iterator);

			if (insertCell != nullptr) {

				printf("%d�Ԗڂ̗v�f�̕ύX����l����͂��Ă�������\n", iterator);
				scanf_s("%s", inputValue[num], 20);

				////�w�肵���Z����val��ύX

				change(insertCell, inputValue[num]);
				num++;

				printf("%d�Ԗڂ̗v�f�̒l��'%s'�ɕύX����܂���\n", iterator, inputValue[num - 1]);
			}
			else
			{
				printf("%d�Ԗڂ̗v�f��������܂���ł���\n", iterator);
			}

			printf("}\n");
			printf("---------------------------------\n");

			sceneInput = 0;
		}
		else if (scene == 4) {

			printf("[�v�f�̍폜]\n");
			printf("�폜�������v�f�̔ԍ����w�肵�Ă�������\n");
			scanf_s("%d", &iterator);

			insertCell = getInsertListAddress(&head, iterator);

			if (insertCell != nullptr) {

				Delete(insertCell, iterator);

			}
			else {
				printf("%d�Ԗڂ̗v�f��������܂���ł���\n", iterator);
			}

			printf("\n");
			printf("---------------------------------\n");

			sceneInput = 0;
		}
		else if (scene == 5) {

			printf("[�v�f�̕��ёւ�]\n");
			printf("���ёւ�����1�߂̗v�f�̔ԍ�����͂��Ă�������\n");
			scanf_s("%d", &iterator);
			printf("���ёւ�����2�߂̗v�f�̔ԍ�����͂��Ă�������\n");
			scanf_s("%d", &iteratorSub);

			insertCell = getInsertListAddress(&head, iterator);
			insertCellSub = getInsertListAddress(&head, iteratorSub);

			if (insertCell != nullptr) {
				if (insertCellSub != nullptr) {

					//cell��val���L�^
					for (int i = 0; i < 20; i++) {
						cellValue[i] = insertCell->val[i];
						cellSubValue[i] = insertCellSub->val[i];
					}

					//1�߂�2�߂��폜
					Delete(insertCell, iterator);
					Delete(insertCellSub, iteratorSub);

					//�����Ɠ����ɓ��e�����ւ���
					insertCell = getInsertListAddress(&head, iterator);
					create(insertCell, cellSubValue);

					insertCellSub = getInsertListAddress(&head, iteratorSub);
					create(insertCellSub, cellValue);


				}
				else {
					printf("%d�Ԗڂ̗v�f��������܂���ł���\n", iterator);
				}
			}
			else {
				printf("%d�Ԗڂ̗v�f��������܂���ł���\n", iterator);
			}

			printf("\n");
			printf("---------------------------------\n");

			sceneInput = 0;
		}

		//���͂��ꂽ�V�[���ɐ؂�ւ�
		if (sceneInput != 9) {
			scene = sceneInput;
		}
		else {
			scene = 0;
		}

		//�V�[���̒��̃V�[���̐؂�ւ�
		if (inScene == 0) {

			if (inSceneInput == 1) {
				inScene = 1;
			}
			else if (inSceneInput == 2) {
				inScene = 2;
			}
			else if (inSceneInput == 9) {
				scene = 0;
			}

		}
		else {

			if (inSceneInput == 1) {
				inScene = 0;
			}
			else if (inSceneInput == 2) {
				scene = 0;
			}
		}

		//�V�[��0�̎����̕ϐ������Z�b�g����
		if (scene == 0) {
			inScene = 0;
			inSceneInput = 0;
		}

	}
	return 0;
}

void create(CELL* currentCell, const char* val) {

	//�V�K�ɃZ�����쐬
	CELL* newCell;
	newCell = (CELL*)malloc(sizeof(CELL));
	newCell->val = val;
	newCell->prev = currentCell;
	newCell->next = currentCell->next;

	//�w�肵���Z���̎��̃Z����[�O�̃Z���̃|�C���^]�ɐV�K�Z���̃A�h���X����
	if (currentCell->next) {
		CELL* nextCell = currentCell->next;
		nextCell->prev = newCell;
	}

	//�w�肵���Z����[���̃Z���̃|�C���^]�ɐV�K�Z���̃A�h���X����
	currentCell->next = newCell;

}

void index(CELL* endCell) {

	int no = 1;

	printf("�v�f�ꗗ:{\n");
	//next�ɉ����l�������Ă������o��

	while (endCell->next != nullptr) {
		endCell = endCell->next;
		printf("%d: %s\n", no, endCell->val);
		no++;
	}
	printf("}\n");
	printf("\n");
	printf("�v�f��: %d\n", no - 1);

}

CELL* getInsertListAddress(CELL* endCELL, int iterator) {

	int null = 0;

	for (int i = 0; i < iterator; i++) {

		if (endCELL->next) {
			endCELL = endCELL->next;
		}
		else {
			null = 1;
			break;
		}
	}

	if (null == 1) {
		endCELL = nullptr;
	}

	return endCELL;
}

void change(CELL* currentCell, const char* val) {

	////�w�肵���Z����val��ύX

	currentCell->val = val;

}

void Delete(CELL* currentCell, int iterator) {

	if (currentCell->next != nullptr) {

		//���͂��ꂽ�Z����1���̃Z����prev��ύX
		currentCell->next->prev = currentCell->prev;

	}


	if (currentCell->prev != nullptr) {

		//���͂��ꂽ�Z����1�O�̃Z����next��ύX
		currentCell->prev->next = currentCell->next;

	}
	


	printf("%d�Ԗڂ̗v�f%s���폜���܂���\n", iterator, currentCell->val);

}