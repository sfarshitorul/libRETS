/*
 * Copyright (C) 2005 National Association of REALTORS(R)
 *
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, and/or sell copies of the
 * Software, and to permit persons to whom the Software is furnished
 * to do so, provided that the above copyright notice(s) and this
 * permission notice appear in all copies of the Software and that
 * both the above copyright notice(s) and this permission notice
 * appear in supporting documentation.
 */
#include <iostream>
#include "librets/GetObjectQuery.h"
#include "librets/util.h"

using namespace librets;
using namespace librets::util;
using std::string;
using std::ostream;

GetObjectQuery::GetObjectQuery() : mUseLocation(true)
{
    mObjectKeys.reset(new StringVector());
}

string GetObjectQuery::GetResource() const
{
    return mResource;
}

void GetObjectQuery::SetResource(string resource)
{
    mResource = resource;
}

string GetObjectQuery::GetType() const
{
    return mType;
}

void GetObjectQuery::SetType(string type)
{
    mType = type;
}

StringVectorPtr GetObjectQuery::GetObjectKeys() const
{
    return mObjectKeys;
}

StringVector * GetObjectQuery::GetObjectKeysPtr() const
{
    return mObjectKeys.get();
}

void GetObjectQuery::AddObjectKey(string objectKey)
{
    mObjectKeys->push_back(objectKey);
}

bool GetObjectQuery::GetUseLocation() const
{
    return mUseLocation;
}

void GetObjectQuery::SetUseLocation(bool useLocation)
{
    mUseLocation = useLocation;
}

ostream & GetObjectQuery::Print(ostream & outputStream) const
{
    return outputStream
        << "Type <" << mType << ">, Object key <" << mObjectKeys << ">";
}
