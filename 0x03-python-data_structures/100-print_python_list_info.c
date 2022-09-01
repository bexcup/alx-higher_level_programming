#include <Python.h>
/**
 * print_python_list_info - Prints basic information about Python lists
 * @p: Python object
 */
void print_python_list_info(PyObject *p)
{
	int size;
	int i;

	size = Py_SIZE(p);
	printf("[*] Size of the Python List = %d\n", size);
	printf("[*] Allocated = %d\n", ((PyListObject *)p)->allocated));

	for (i = 0; i < size; i++)
	{
		printf("Element %d: ", i);
		printf("%s\n", ((PyList_GetItem(p, i))->ob_type)->tp_name);
	}
}
