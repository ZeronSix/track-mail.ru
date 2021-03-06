/*!
 * \file
 * CPU architecture header generated by a script.
 * WARNING! DO NO EDIT! AUTOMATICALLY GENERATED!!!
 */
#ifndef {header}
#define {header} 
#include <string.h>

/*!
 * Macro that compares a string with the specified command's name
 */
#define CMD_CMP_NAME(_cmd_, _s_) (strcasecmp(CMD_NAME_ ## _cmd_, _s_) == 0)

/*!
 * Address modes.
 */
enum
{{
    ADDR_MODE_UNKNOWN = 1,
{address_modes}}};

/*!
 * Command codes.
 */
enum
{{
    CMD_UNKNOWN = 1,
{command_codes}}};

/*!
 * Register codes.
 */
enum
{{
    REG_UNKNOWN = 1,
{register_codes}}};

{command_names_decl}

{register_names_decl}

/*!
 * Command reader.
 */
{cmd_reader}

/*!
 * Register reader.
 */
{reg_reader}

/*!
 * Command writer.
 */
{cmd_writer}

/*!
 * Register writer.
 */
{reg_writer}

/*!
 * Argument handler for asm.
 */
{arg_handler}

#endif /* ifndef {header} */

