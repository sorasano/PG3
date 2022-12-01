#include <stdio.h>
#include <stdlib.h>

//双方向リストの構造体の定義

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

	//先頭のセルの宣言
	CELL head;
	CELL cell1;
	CELL cell2;
	CELL cell3;

	//セルの設定
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

	//シーン切り替え用
	int scene = 0;
	int inScene = 0;
	int sceneInput;
	int inSceneInput = 0;

	//入力用
	int iterator;
	int iteratorSub;

	int num = 0;
	char inputValue[100][20];
	CELL* insertCell;
	CELL* insertCellSub;

	char cellValue[20];
	char cellSubValue[20];

	//出力用
	char buf[100];

	//要素があるかどうか

	int isCell = 1;

	while (1)
	{


		//要素があるかどうか

		if (head.next == nullptr) {
			isCell = 0;
		}
		else {
			isCell = 1;
		}

		if (scene == 0 && isCell == 1) {

			printf("[要素の操作]\n");
			printf("1.要素の表示\n");
			printf("2.要素の挿入\n");
			printf("3.要素の編集\n");
			printf("4.要素の削除\n");
			printf("5.要素の並び替え(オプション)\n");
			printf("\n");
			printf("-------------------------------\n");
			printf("操作を選択してください\n");
			scanf_s("%d", &sceneInput);

		}
		else if (scene == 0 && isCell == 0)
		{
			printf("[要素の操作]\n");
			printf("1.要素の表示\n");
			printf("2.要素の挿入\n");
			printf("\n");
			printf("-------------------------------\n");
			printf("操作を選択してください\n");
			scanf_s("%d", &sceneInput);

		}
		else if (scene == 1) {

			if (inScene == 0) {
				printf("[要素の表示]\n");
				printf("1.要素の一覧表示\n");
				printf("2.順番を指定して要素を表示\n");
				printf("9.要素操作に戻る\n");
				printf("\n");
				printf("-------------------------------\n");
				printf("操作を選択してください\n");
				scanf_s("%d", &inSceneInput);
			}
			else if (inScene == 1) {

				printf("[要素の一覧表示]\n");

				//リスト一覧の表示
				index(&head);

				printf("}\n");
				printf("---------------------------------\n");
				printf("1.要素の表示に戻る\n");
				printf("2.要素の操作に戻る\n");

				scanf_s("%d", &inSceneInput);
				printf("}\n");
				printf("---------------------------------\n");
			}
			else if (inScene == 2) {
				printf("[順番を指定して要素を表示]\n");

				printf("表示したい要素の順番を指定してください。\n");
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
				printf("1.要素の表示に戻る\n");
				printf("2.要素の操作に戻る\n");
			}

		}
		else if (scene == 2) {

			printf("[リスト要素の挿入]\n");

			printf("要素を追加する場所を指定してください。最後尾に追加する場合は何も入力しないでください。\n");
			scanf_s("%d", &iterator);

			printf("追加する要素の値を入力してください\n");
			scanf_s("%s", inputValue[num], 20);

			if (&iterator != nullptr) {

				//任意のセルの後ろに追加
				insertCell = getInsertListAddress(&head, iterator - 1);
				create(insertCell, inputValue[num]);
				num++;
			}
			else {

				//入力がない場合

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

			printf("要素'%s'が%d番目に挿入されました\n", inputValue[num - 1], iterator);
			printf("\n");
			printf("---------------------------------\n");

			sceneInput = 0;
		}
		else if (scene == 3) {

			printf("[要素の編集]\n");
			printf("編集したい要素の番号を指定してください\n");
			scanf_s("%d", &iterator);

			insertCell = getInsertListAddress(&head, iterator);

			if (insertCell != nullptr) {

				printf("%d番目の要素の変更する値を入力してください\n", iterator);
				scanf_s("%s", inputValue[num], 20);

				////指定したセルのvalを変更

				change(insertCell, inputValue[num]);
				num++;

				printf("%d番目の要素の値が'%s'に変更されました\n", iterator, inputValue[num - 1]);
			}
			else
			{
				printf("%d番目の要素が見つかりませんでした\n", iterator);
			}

			printf("}\n");
			printf("---------------------------------\n");

			sceneInput = 0;
		}
		else if (scene == 4) {

			printf("[要素の削除]\n");
			printf("削除したい要素の番号を指定してください\n");
			scanf_s("%d", &iterator);

			insertCell = getInsertListAddress(&head, iterator);

			if (insertCell != nullptr) {

				Delete(insertCell, iterator);

			}
			else {
				printf("%d番目の要素が見つかりませんでした\n", iterator);
			}

			printf("\n");
			printf("---------------------------------\n");

			sceneInput = 0;
		}
		else if (scene == 5) {

			printf("[要素の並び替え]\n");
			printf("並び替えたい1つめの要素の番号を入力してください\n");
			scanf_s("%d", &iterator);
			printf("並び替えたい2つめの要素の番号を入力してください\n");
			scanf_s("%d", &iteratorSub);

			insertCell = getInsertListAddress(&head, iterator);
			insertCellSub = getInsertListAddress(&head, iteratorSub);

			if (insertCell != nullptr) {
				if (insertCellSub != nullptr) {

					//cellのvalを記録
					for (int i = 0; i < 20; i++) {
						cellValue[i] = insertCell->val[i];
						cellSubValue[i] = insertCellSub->val[i];
					}

					//1つめと2つめを削除
					Delete(insertCell, iterator);
					Delete(insertCellSub, iteratorSub);

					//生成と同時に内容を入れ替える
					insertCell = getInsertListAddress(&head, iterator);
					create(insertCell, cellSubValue);

					insertCellSub = getInsertListAddress(&head, iteratorSub);
					create(insertCellSub, cellValue);


				}
				else {
					printf("%d番目の要素が見つかりませんでした\n", iterator);
				}
			}
			else {
				printf("%d番目の要素が見つかりませんでした\n", iterator);
			}

			printf("\n");
			printf("---------------------------------\n");

			sceneInput = 0;
		}

		//入力されたシーンに切り替え
		if (sceneInput != 9) {
			scene = sceneInput;
		}
		else {
			scene = 0;
		}

		//シーンの中のシーンの切り替え
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

		//シーン0の時他の変数もリセットする
		if (scene == 0) {
			inScene = 0;
			inSceneInput = 0;
		}

	}
	return 0;
}

void create(CELL* currentCell, const char* val) {

	//新規にセルを作成
	CELL* newCell;
	newCell = (CELL*)malloc(sizeof(CELL));
	newCell->val = val;
	newCell->prev = currentCell;
	newCell->next = currentCell->next;

	//指定したセルの次のセルの[前のセルのポインタ]に新規セルのアドレスを代入
	if (currentCell->next) {
		CELL* nextCell = currentCell->next;
		nextCell->prev = newCell;
	}

	//指定したセルの[次のセルのポインタ]に新規セルのアドレスを代入
	currentCell->next = newCell;

}

void index(CELL* endCell) {

	int no = 1;

	printf("要素一覧:{\n");
	//nextに何か値が入っている限り出力

	while (endCell->next != nullptr) {
		endCell = endCell->next;
		printf("%d: %s\n", no, endCell->val);
		no++;
	}
	printf("}\n");
	printf("\n");
	printf("要素数: %d\n", no - 1);

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

	////指定したセルのvalを変更

	currentCell->val = val;

}

void Delete(CELL* currentCell, int iterator) {

	if (currentCell->next != nullptr) {

		//入力されたセルの1つ次のセルのprevを変更
		currentCell->next->prev = currentCell->prev;

	}


	if (currentCell->prev != nullptr) {

		//入力されたセルの1つ前のセルのnextを変更
		currentCell->prev->next = currentCell->next;

	}
	


	printf("%d番目の要素%sを削除しました\n", iterator, currentCell->val);

}