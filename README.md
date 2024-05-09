# libft_rolling_version

### renamed
- ft_fprintf -> ft_dprintf (file descriptor instead of open file)

#### added
<pre>
- ft_abs		(return absolute value of int)
- ft_atof		(return float)
- ft_atol		(return long int)
- ft_fabs		(return absolute value of double)
- ft_fabsf		(return absolute value of float)
- ft_ftoa		(return *str from float)
- ft_ftoa_addr		(return *str from float without malloc)
- ft_ismax		(return TRUE / FALSE)
- ft_issignal		(kept for compatibily)
- ft_issign		(same as ft_issignal)
- ft_isspace		(return int 1 if true, 0 if false)
- ft_itoa_addr		(return *str from int without malloc)
- ft_free_dprt      (void, frees a **dptr)

</pre>

#### added from projects
<pre>
- get_next_line  
- ft_printf  
- ft_fprintf    (obsolete, use ft_dprintf)
- ft_dprintf    renamed: same as ft_fprintf (file descriptor instead of open file)
</pre>
 
#### refactor
<pre>
- makefile  
- divide into subdirs  
- objects created on their own dir  

- libft.h  	(defines moved to:)	libft_define.h  
- added pretty_colors_ANSI
</pre>
