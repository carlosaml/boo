<?xml version="1.0"?>
<project name="boo nunit include">

	<!-- find out where nunit.framework.dll is -->
	<property name="lib.dir"
		value="${path::combine(nant::get-base-directory(), 'lib')}"
		dynamic="true" />

    <property name="lib.family.dir"
		value="${path::combine(lib.dir,framework::get-family(framework::get-target-framework()))}"
		dynamic="true" />

    <property name="lib.framework.dir"
		value="${path::combine(lib.family.dir, version::to-string(framework::get-version(framework::get-target-framework())))}"
		dynamic="true" />

	<property name="nunit.framework.dll"
			value="${path::combine(lib.framework.dir, 'nunit.framework.dll')}" />

</project>
