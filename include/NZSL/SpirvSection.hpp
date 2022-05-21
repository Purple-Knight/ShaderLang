// Copyright (C) 2022 Jérôme "Lynix" Leclercq (lynix680@gmail.com)
// This file is part of the "Nazara Shading Language" project
// For conditions of distribution and use, see copyright notice in Config.hpp

#pragma once

#ifndef NZSL_SPIRVSECTION_HPP
#define NZSL_SPIRVSECTION_HPP

#include <NZSL/Config.hpp>
#include <NZSL/SpirvSectionBase.hpp>

namespace nzsl
{
	class NZSL_API SpirvSection : public SpirvSectionBase
	{
		public:
			SpirvSection() = default;
			SpirvSection(const SpirvSection&) = default;
			SpirvSection(SpirvSection&&) = default;
			~SpirvSection() = default;

			using SpirvSectionBase::Append;
			using SpirvSectionBase::AppendRaw;
			using SpirvSectionBase::AppendSection;
			using SpirvSectionBase::AppendVariadic;

			SpirvSection& operator=(const SpirvSection&) = delete;
			SpirvSection& operator=(SpirvSection&&) = default;
	};
}

#include <NZSL/SpirvSection.inl>

#endif // NZSL_SPIRVSECTION_HPP
