# Production AST nodes full definition.
# This file was generated by SableCC (http://www.sablecc.org/).
module parser_prod

import lexer
intrude import parser_nodes
private import tables

redef class ANode
	# Parent of the node in the AST
	var parent: nullable ANode is writable

	# Remove a child from the AST
	fun remove_child(child: ANode)
	do
		replace_child(child, null)
	end

	# Replace a child with an other node in the AST
	fun replace_child(old_child: ANode, new_child: nullable ANode) is abstract

	# Replace itself with an other node in the AST
	fun replace_with(node: ANode)
	do
		if _parent != null then
			_parent.replace_child(self, node)
		end
	end

	# Visit all nodes in order.
	# Thus, call "v.visit(e)" for each node e
	fun visit_all(v: Visitor) is abstract
end

redef class Token
	redef fun visit_all(v: Visitor) do end
	redef fun replace_child(old_child: ANode, new_child: nullable ANode) do end
end

redef class Prod
	redef fun replace_with(n: ANode)
        do
                super
                assert n isa Prod
                n.location = location
        end
end

# Abstract standard visitor
abstract class Visitor
	# What the visitor do when a node is visited
        # Concrete visitors should redefine this method.
        protected fun visit(e: nullable ANode) is abstract

        # Ask the visitor to visit a given node.
        # Usually automatically called by visit_all* methods.
	# This methos should not be redefined
        fun enter_visit(e: nullable ANode)
	do
		var old = current_node
		current_node = e
		visit(e)
		current_node = old
	end

	# The current visited node
	var current_node: nullable ANode = null
end

redef class AListing
    private init empty_init do end

    init init_alisting (
            n_lines: Collection[Object], # Should be Collection[ALine]
            n_label_decl: nullable ALabelDecl,
            n_end_block: nullable TEndBlock
    )
    do
        empty_init
	for n in n_lines do
		assert n isa ALine
		_n_lines.add(n)
		n.parent = self
	end
        _n_label_decl = n_label_decl
	if n_label_decl != null then
		n_label_decl.parent = self
	end
        _n_end_block = n_end_block.as(not null)
	n_end_block.parent = self
    end

    redef fun replace_child(old_child: ANode, new_child: nullable ANode)
    do
        for i in [0.._n_lines.length[ do
            if _n_lines[i] == old_child then
                if new_child != null then
		    assert new_child isa ALine
                    _n_lines[i] = new_child
                    new_child.parent = self
                else
                    _n_lines.remove_at(i)
                end
                return
            end
        end
        if _n_label_decl == old_child then
            if new_child != null then
                new_child.parent = self
		assert new_child isa ALabelDecl
                _n_label_decl = new_child
	    else
		_n_label_decl = null
            end
            return
	end
        if _n_end_block == old_child then
            if new_child != null then
                new_child.parent = self
		assert new_child isa TEndBlock
                _n_end_block = new_child
	    else
		abort
            end
            return
	end
    end

    redef fun visit_all(v: Visitor)
    do
            for n in _n_lines do
                v.enter_visit(n)
	    end
        if _n_label_decl != null then
            v.enter_visit(_n_label_decl.as(not null))
        end
        v.enter_visit(_n_end_block)
    end
end
redef class AEmptyLine
    private init empty_init do end

    init init_aemptyline (
            n_label_decl: nullable ALabelDecl,
            n_comment: nullable TComment,
            n_eol: nullable TEol
    )
    do
        empty_init
        _n_label_decl = n_label_decl
	if n_label_decl != null then
		n_label_decl.parent = self
	end
        _n_comment = n_comment
	if n_comment != null then
		n_comment.parent = self
	end
        _n_eol = n_eol.as(not null)
	n_eol.parent = self
    end

    redef fun replace_child(old_child: ANode, new_child: nullable ANode)
    do
        if _n_label_decl == old_child then
            if new_child != null then
                new_child.parent = self
		assert new_child isa ALabelDecl
                _n_label_decl = new_child
	    else
		_n_label_decl = null
            end
            return
	end
        if _n_comment == old_child then
            if new_child != null then
                new_child.parent = self
		assert new_child isa TComment
                _n_comment = new_child
	    else
		_n_comment = null
            end
            return
	end
        if _n_eol == old_child then
            if new_child != null then
                new_child.parent = self
		assert new_child isa TEol
                _n_eol = new_child
	    else
		abort
            end
            return
	end
    end

    redef fun visit_all(v: Visitor)
    do
        if _n_label_decl != null then
            v.enter_visit(_n_label_decl.as(not null))
        end
        if _n_comment != null then
            v.enter_visit(_n_comment.as(not null))
        end
        v.enter_visit(_n_eol)
    end
end
redef class AInstructionLine
    private init empty_init do end

    init init_ainstructionline (
            n_label_decl: nullable ALabelDecl,
            n_instruction: nullable AInstruction,
            n_comment: nullable TComment,
            n_eol: nullable TEol
    )
    do
        empty_init
        _n_label_decl = n_label_decl
	if n_label_decl != null then
		n_label_decl.parent = self
	end
        _n_instruction = n_instruction.as(not null)
	n_instruction.parent = self
        _n_comment = n_comment
	if n_comment != null then
		n_comment.parent = self
	end
        _n_eol = n_eol.as(not null)
	n_eol.parent = self
    end

    redef fun replace_child(old_child: ANode, new_child: nullable ANode)
    do
        if _n_label_decl == old_child then
            if new_child != null then
                new_child.parent = self
		assert new_child isa ALabelDecl
                _n_label_decl = new_child
	    else
		_n_label_decl = null
            end
            return
	end
        if _n_instruction == old_child then
            if new_child != null then
                new_child.parent = self
		assert new_child isa AInstruction
                _n_instruction = new_child
	    else
		abort
            end
            return
	end
        if _n_comment == old_child then
            if new_child != null then
                new_child.parent = self
		assert new_child isa TComment
                _n_comment = new_child
	    else
		_n_comment = null
            end
            return
	end
        if _n_eol == old_child then
            if new_child != null then
                new_child.parent = self
		assert new_child isa TEol
                _n_eol = new_child
	    else
		abort
            end
            return
	end
    end

    redef fun visit_all(v: Visitor)
    do
        if _n_label_decl != null then
            v.enter_visit(_n_label_decl.as(not null))
        end
        v.enter_visit(_n_instruction)
        if _n_comment != null then
            v.enter_visit(_n_comment.as(not null))
        end
        v.enter_visit(_n_eol)
    end
end
redef class ADirectiveLine
    private init empty_init do end

    init init_adirectiveline (
            n_label_decl: nullable ALabelDecl,
            n_directive: nullable ADirective,
            n_comment: nullable TComment,
            n_eol: nullable TEol
    )
    do
        empty_init
        _n_label_decl = n_label_decl
	if n_label_decl != null then
		n_label_decl.parent = self
	end
        _n_directive = n_directive.as(not null)
	n_directive.parent = self
        _n_comment = n_comment
	if n_comment != null then
		n_comment.parent = self
	end
        _n_eol = n_eol.as(not null)
	n_eol.parent = self
    end

    redef fun replace_child(old_child: ANode, new_child: nullable ANode)
    do
        if _n_label_decl == old_child then
            if new_child != null then
                new_child.parent = self
		assert new_child isa ALabelDecl
                _n_label_decl = new_child
	    else
		_n_label_decl = null
            end
            return
	end
        if _n_directive == old_child then
            if new_child != null then
                new_child.parent = self
		assert new_child isa ADirective
                _n_directive = new_child
	    else
		abort
            end
            return
	end
        if _n_comment == old_child then
            if new_child != null then
                new_child.parent = self
		assert new_child isa TComment
                _n_comment = new_child
	    else
		_n_comment = null
            end
            return
	end
        if _n_eol == old_child then
            if new_child != null then
                new_child.parent = self
		assert new_child isa TEol
                _n_eol = new_child
	    else
		abort
            end
            return
	end
    end

    redef fun visit_all(v: Visitor)
    do
        if _n_label_decl != null then
            v.enter_visit(_n_label_decl.as(not null))
        end
        v.enter_visit(_n_directive)
        if _n_comment != null then
            v.enter_visit(_n_comment.as(not null))
        end
        v.enter_visit(_n_eol)
    end
end
redef class ALabelDecl
    private init empty_init do end

    init init_alabeldecl (
            n_id: nullable TId,
            n_colon: nullable TColon
    )
    do
        empty_init
        _n_id = n_id.as(not null)
	n_id.parent = self
        _n_colon = n_colon.as(not null)
	n_colon.parent = self
    end

    redef fun replace_child(old_child: ANode, new_child: nullable ANode)
    do
        if _n_id == old_child then
            if new_child != null then
                new_child.parent = self
		assert new_child isa TId
                _n_id = new_child
	    else
		abort
            end
            return
	end
        if _n_colon == old_child then
            if new_child != null then
                new_child.parent = self
		assert new_child isa TColon
                _n_colon = new_child
	    else
		abort
            end
            return
	end
    end

    redef fun visit_all(v: Visitor)
    do
        v.enter_visit(_n_id)
        v.enter_visit(_n_colon)
    end
end
redef class AUnaryInstruction
    private init empty_init do end

    init init_aunaryinstruction (
            n_id: nullable TId
    )
    do
        empty_init
        _n_id = n_id.as(not null)
	n_id.parent = self
    end

    redef fun replace_child(old_child: ANode, new_child: nullable ANode)
    do
        if _n_id == old_child then
            if new_child != null then
                new_child.parent = self
		assert new_child isa TId
                _n_id = new_child
	    else
		abort
            end
            return
	end
    end

    redef fun visit_all(v: Visitor)
    do
        v.enter_visit(_n_id)
    end
end
redef class ABinaryInstruction
    private init empty_init do end

    init init_abinaryinstruction (
            n_id: nullable TId,
            n_operand: nullable AOperand
    )
    do
        empty_init
        _n_id = n_id.as(not null)
	n_id.parent = self
        _n_operand = n_operand.as(not null)
	n_operand.parent = self
    end

    redef fun replace_child(old_child: ANode, new_child: nullable ANode)
    do
        if _n_id == old_child then
            if new_child != null then
                new_child.parent = self
		assert new_child isa TId
                _n_id = new_child
	    else
		abort
            end
            return
	end
        if _n_operand == old_child then
            if new_child != null then
                new_child.parent = self
		assert new_child isa AOperand
                _n_operand = new_child
	    else
		abort
            end
            return
	end
    end

    redef fun visit_all(v: Visitor)
    do
        v.enter_visit(_n_id)
        v.enter_visit(_n_operand)
    end
end
redef class AImmediateOperand
    private init empty_init do end

    init init_aimmediateoperand (
            n_value: nullable AValue
    )
    do
        empty_init
        _n_value = n_value.as(not null)
	n_value.parent = self
    end

    redef fun replace_child(old_child: ANode, new_child: nullable ANode)
    do
        if _n_value == old_child then
            if new_child != null then
                new_child.parent = self
		assert new_child isa AValue
                _n_value = new_child
	    else
		abort
            end
            return
	end
    end

    redef fun visit_all(v: Visitor)
    do
        v.enter_visit(_n_value)
    end
end
redef class AAnyOperand
    private init empty_init do end

    init init_aanyoperand (
            n_value: nullable AValue,
            n_comma: nullable TComma,
            n_id: nullable TId
    )
    do
        empty_init
        _n_value = n_value.as(not null)
	n_value.parent = self
        _n_comma = n_comma.as(not null)
	n_comma.parent = self
        _n_id = n_id.as(not null)
	n_id.parent = self
    end

    redef fun replace_child(old_child: ANode, new_child: nullable ANode)
    do
        if _n_value == old_child then
            if new_child != null then
                new_child.parent = self
		assert new_child isa AValue
                _n_value = new_child
	    else
		abort
            end
            return
	end
        if _n_comma == old_child then
            if new_child != null then
                new_child.parent = self
		assert new_child isa TComma
                _n_comma = new_child
	    else
		abort
            end
            return
	end
        if _n_id == old_child then
            if new_child != null then
                new_child.parent = self
		assert new_child isa TId
                _n_id = new_child
	    else
		abort
            end
            return
	end
    end

    redef fun visit_all(v: Visitor)
    do
        v.enter_visit(_n_value)
        v.enter_visit(_n_comma)
        v.enter_visit(_n_id)
    end
end
redef class ALabelValue
    private init empty_init do end

    init init_alabelvalue (
            n_id: nullable TId
    )
    do
        empty_init
        _n_id = n_id.as(not null)
	n_id.parent = self
    end

    redef fun replace_child(old_child: ANode, new_child: nullable ANode)
    do
        if _n_id == old_child then
            if new_child != null then
                new_child.parent = self
		assert new_child isa TId
                _n_id = new_child
	    else
		abort
            end
            return
	end
    end

    redef fun visit_all(v: Visitor)
    do
        v.enter_visit(_n_id)
    end
end
redef class ANumberValue
    private init empty_init do end

    init init_anumbervalue (
            n_number: nullable TNumber
    )
    do
        empty_init
        _n_number = n_number.as(not null)
	n_number.parent = self
    end

    redef fun replace_child(old_child: ANode, new_child: nullable ANode)
    do
        if _n_number == old_child then
            if new_child != null then
                new_child.parent = self
		assert new_child isa TNumber
                _n_number = new_child
	    else
		abort
            end
            return
	end
    end

    redef fun visit_all(v: Visitor)
    do
        v.enter_visit(_n_number)
    end
end
redef class ACharValue
    private init empty_init do end

    init init_acharvalue (
            n_char: nullable TChar
    )
    do
        empty_init
        _n_char = n_char.as(not null)
	n_char.parent = self
    end

    redef fun replace_child(old_child: ANode, new_child: nullable ANode)
    do
        if _n_char == old_child then
            if new_child != null then
                new_child.parent = self
		assert new_child isa TChar
                _n_char = new_child
	    else
		abort
            end
            return
	end
    end

    redef fun visit_all(v: Visitor)
    do
        v.enter_visit(_n_char)
    end
end
redef class AStringValue
    private init empty_init do end

    init init_astringvalue (
            n_string: nullable TString
    )
    do
        empty_init
        _n_string = n_string.as(not null)
	n_string.parent = self
    end

    redef fun replace_child(old_child: ANode, new_child: nullable ANode)
    do
        if _n_string == old_child then
            if new_child != null then
                new_child.parent = self
		assert new_child isa TString
                _n_string = new_child
	    else
		abort
            end
            return
	end
    end

    redef fun visit_all(v: Visitor)
    do
        v.enter_visit(_n_string)
    end
end
redef class AHexValue
    private init empty_init do end

    init init_ahexvalue (
            n_hex: nullable THex
    )
    do
        empty_init
        _n_hex = n_hex.as(not null)
	n_hex.parent = self
    end

    redef fun replace_child(old_child: ANode, new_child: nullable ANode)
    do
        if _n_hex == old_child then
            if new_child != null then
                new_child.parent = self
		assert new_child isa THex
                _n_hex = new_child
	    else
		abort
            end
            return
	end
    end

    redef fun visit_all(v: Visitor)
    do
        v.enter_visit(_n_hex)
    end
end
redef class AByteDirective
    private init empty_init do end

    init init_abytedirective (
            n_tk_byte: nullable TTkByte,
            n_value: nullable AValue
    )
    do
        empty_init
        _n_tk_byte = n_tk_byte.as(not null)
	n_tk_byte.parent = self
        _n_value = n_value.as(not null)
	n_value.parent = self
    end

    redef fun replace_child(old_child: ANode, new_child: nullable ANode)
    do
        if _n_tk_byte == old_child then
            if new_child != null then
                new_child.parent = self
		assert new_child isa TTkByte
                _n_tk_byte = new_child
	    else
		abort
            end
            return
	end
        if _n_value == old_child then
            if new_child != null then
                new_child.parent = self
		assert new_child isa AValue
                _n_value = new_child
	    else
		abort
            end
            return
	end
    end

    redef fun visit_all(v: Visitor)
    do
        v.enter_visit(_n_tk_byte)
        v.enter_visit(_n_value)
    end
end
redef class AWordDirective
    private init empty_init do end

    init init_aworddirective (
            n_tk_word: nullable TTkWord,
            n_value: nullable AValue
    )
    do
        empty_init
        _n_tk_word = n_tk_word.as(not null)
	n_tk_word.parent = self
        _n_value = n_value.as(not null)
	n_value.parent = self
    end

    redef fun replace_child(old_child: ANode, new_child: nullable ANode)
    do
        if _n_tk_word == old_child then
            if new_child != null then
                new_child.parent = self
		assert new_child isa TTkWord
                _n_tk_word = new_child
	    else
		abort
            end
            return
	end
        if _n_value == old_child then
            if new_child != null then
                new_child.parent = self
		assert new_child isa AValue
                _n_value = new_child
	    else
		abort
            end
            return
	end
    end

    redef fun visit_all(v: Visitor)
    do
        v.enter_visit(_n_tk_word)
        v.enter_visit(_n_value)
    end
end
redef class ABlockDirective
    private init empty_init do end

    init init_ablockdirective (
            n_tk_block: nullable TTkBlock,
            n_value: nullable AValue
    )
    do
        empty_init
        _n_tk_block = n_tk_block.as(not null)
	n_tk_block.parent = self
        _n_value = n_value.as(not null)
	n_value.parent = self
    end

    redef fun replace_child(old_child: ANode, new_child: nullable ANode)
    do
        if _n_tk_block == old_child then
            if new_child != null then
                new_child.parent = self
		assert new_child isa TTkBlock
                _n_tk_block = new_child
	    else
		abort
            end
            return
	end
        if _n_value == old_child then
            if new_child != null then
                new_child.parent = self
		assert new_child isa AValue
                _n_value = new_child
	    else
		abort
            end
            return
	end
    end

    redef fun visit_all(v: Visitor)
    do
        v.enter_visit(_n_tk_block)
        v.enter_visit(_n_value)
    end
end
redef class AAsciiDirective
    private init empty_init do end

    init init_aasciidirective (
            n_tk_ascii: nullable TTkAscii,
            n_value: nullable AValue
    )
    do
        empty_init
        _n_tk_ascii = n_tk_ascii.as(not null)
	n_tk_ascii.parent = self
        _n_value = n_value.as(not null)
	n_value.parent = self
    end

    redef fun replace_child(old_child: ANode, new_child: nullable ANode)
    do
        if _n_tk_ascii == old_child then
            if new_child != null then
                new_child.parent = self
		assert new_child isa TTkAscii
                _n_tk_ascii = new_child
	    else
		abort
            end
            return
	end
        if _n_value == old_child then
            if new_child != null then
                new_child.parent = self
		assert new_child isa AValue
                _n_value = new_child
	    else
		abort
            end
            return
	end
    end

    redef fun visit_all(v: Visitor)
    do
        v.enter_visit(_n_tk_ascii)
        v.enter_visit(_n_value)
    end
end
redef class AAddrssDirective
    private init empty_init do end

    init init_aaddrssdirective (
            n_tk_addrss: nullable TTkAddrss,
            n_value: nullable AValue
    )
    do
        empty_init
        _n_tk_addrss = n_tk_addrss.as(not null)
	n_tk_addrss.parent = self
        _n_value = n_value.as(not null)
	n_value.parent = self
    end

    redef fun replace_child(old_child: ANode, new_child: nullable ANode)
    do
        if _n_tk_addrss == old_child then
            if new_child != null then
                new_child.parent = self
		assert new_child isa TTkAddrss
                _n_tk_addrss = new_child
	    else
		abort
            end
            return
	end
        if _n_value == old_child then
            if new_child != null then
                new_child.parent = self
		assert new_child isa AValue
                _n_value = new_child
	    else
		abort
            end
            return
	end
    end

    redef fun visit_all(v: Visitor)
    do
        v.enter_visit(_n_tk_addrss)
        v.enter_visit(_n_value)
    end
end
redef class AEquateDirective
    private init empty_init do end

    init init_aequatedirective (
            n_tk_equate: nullable TTkEquate,
            n_value: nullable AValue
    )
    do
        empty_init
        _n_tk_equate = n_tk_equate.as(not null)
	n_tk_equate.parent = self
        _n_value = n_value.as(not null)
	n_value.parent = self
    end

    redef fun replace_child(old_child: ANode, new_child: nullable ANode)
    do
        if _n_tk_equate == old_child then
            if new_child != null then
                new_child.parent = self
		assert new_child isa TTkEquate
                _n_tk_equate = new_child
	    else
		abort
            end
            return
	end
        if _n_value == old_child then
            if new_child != null then
                new_child.parent = self
		assert new_child isa AValue
                _n_value = new_child
	    else
		abort
            end
            return
	end
    end

    redef fun visit_all(v: Visitor)
    do
        v.enter_visit(_n_tk_equate)
        v.enter_visit(_n_value)
    end
end
redef class ABurnDirective
    private init empty_init do end

    init init_aburndirective (
            n_tk_burn: nullable TTkBurn,
            n_value: nullable AValue
    )
    do
        empty_init
        _n_tk_burn = n_tk_burn.as(not null)
	n_tk_burn.parent = self
        _n_value = n_value.as(not null)
	n_value.parent = self
    end

    redef fun replace_child(old_child: ANode, new_child: nullable ANode)
    do
        if _n_tk_burn == old_child then
            if new_child != null then
                new_child.parent = self
		assert new_child isa TTkBurn
                _n_tk_burn = new_child
	    else
		abort
            end
            return
	end
        if _n_value == old_child then
            if new_child != null then
                new_child.parent = self
		assert new_child isa AValue
                _n_value = new_child
	    else
		abort
            end
            return
	end
    end

    redef fun visit_all(v: Visitor)
    do
        v.enter_visit(_n_tk_burn)
        v.enter_visit(_n_value)
    end
end

redef class Start
    redef fun replace_child(old_child: ANode, new_child: nullable ANode)
    do
        if _n_base == old_child then
            if new_child == null then
            else
                new_child.parent = self
		assert new_child isa AListing
                _n_base = new_child
            end
            old_child.parent = null
            return
	end
    end

    redef fun visit_all(v: Visitor)
    do
        if _n_base != null then
            v.enter_visit(_n_base.as(not null))
        end
	v.enter_visit(_n_eof)
    end
end
