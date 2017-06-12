/*
** my_strcmp.c for my_strcmp in /home/benjamin.g/delivery/CPool_Day06
**
** Made by Benjamin GAYMAY
** Login   <benjamin.g@epitech.net>
**
** Started on  Mon Oct 10 17:22:02 2016 Benjamin GAYMAY
** Last update Sat Jan 21 14:43:20 2017 Benjamin GAYMAY
*/

#include "my.h"

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
    i++;
  return (s1[i] - s2[i]);
}

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0') && n != 1)
    {
      i++;
      n--;
    }
  return (s1[i] - s2[i]);
}
