// Copyright (C) 2022 Jérôme "Lynix" Leclercq (lynix680@gmail.com)
// This file is part of the "Nazara Shading Language" project
// For conditions of distribution and use, see copyright notice in Config.hpp

#include <NZSL/Ast/AstExportVisitor.hpp>
#include <stdexcept>

namespace nzsl::ShaderAst
{
	void AstExportVisitor::Visit(Statement& statement, const Callbacks& callbacks)
	{
		m_callbacks = &callbacks;
		statement.Visit(*this);
	}

	void AstExportVisitor::Visit(DeclareFunctionStatement& node)
	{
		if (!node.isExported.HasValue() || !node.isExported.GetResultingValue())
			return;

		if (m_callbacks->onExportedFunc)
			m_callbacks->onExportedFunc(node);
	}

	void AstExportVisitor::Visit(DeclareStructStatement& node)
	{
		if (!node.isExported.HasValue() || !node.isExported.GetResultingValue())
			return;

		if (m_callbacks->onExportedStruct)
			m_callbacks->onExportedStruct(node);
	}
}
