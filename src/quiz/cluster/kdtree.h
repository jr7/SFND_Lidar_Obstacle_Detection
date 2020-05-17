/* \author Aaron Brown */
// Quiz on implementing kd tree

#include "../../render/render.h"


// Structure to represent node of kd tree
struct Node
{
	std::vector<float> point;
	int id;
	Node* left;
	Node* right;

	Node(std::vector<float> arr, int setId)
	:	point(arr), id(setId), left(NULL), right(NULL)
	{}
};

struct KdTree
{
	Node* root;

	KdTree()
	: root(NULL)
	{}

	void insert(std::vector<float> point, int id)
	{
		insertNode(&root, 0, point, id);

	}

	void insertNode(Node** node, uint depth, std::vector<float> point, int id)
   {
      if(NULL == *node) {
		  *node = new Node(point, id);
	  } else {
		uint cd = depth % 2;

		if(point[cd] < ((*node)->point[cd])){
			insertNode(&((*node)->left), depth+1, point, id);
		} else {
			insertNode(&((*node)->right), depth+1, point, id);
		}
	  }
   }

	// return a list of point ids in the tree that are within distance of target
	std::vector<int> search(std::vector<float> target, float distanceTol)
	{
		std::vector<int> ids;
		return ids;
	}
	

};




