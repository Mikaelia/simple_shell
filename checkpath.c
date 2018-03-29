#include "holberton.h"

/**
  * checkpath - checks path for executable
  * @stash: pointer to main program values
  * Return: NULL if no match found, or executable file if found
  */
char *checkpath(free_t *stash)
{
	tokenlist_t *pathlist;
	struct stat st;
	char *temp;

	if (stash->commands[0] == NULL)
	{
		return (NULL);
	}

	stash->pathvar = _strdup(findpath());
	if (stash->pathvar == NULL)
	{
		return (NULL);
	}
	pathlist = pathsplitlist(stash->pathvar);
	while (pathlist)
	{
		temp = appendcmd(pathlist, stash->commands[0]);
		stash->executable = _strdup(temp);
		free(temp);
		if (stash->executable == NULL)
		{
			freelist(pathlist);
			return (NULL);
		}
		if (stat(stash->executable, &st) < 0)
		{
			free(stash->executable);
			pathlist = pathlist->next;
		}
		else
			break;
	}
	freelist(pathlist);
	return (NULL);
}