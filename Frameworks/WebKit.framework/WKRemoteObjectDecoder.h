/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <Foundation/NSCoder.h>

@interface WKRemoteObjectDecoder : NSCoder {

	RetainPtr<_WKRemoteObjectInterface>* _interface;
	const Dictionary* _rootDictionary;
	const Dictionary* _currentDictionary;
	SEL _replyToSelector;
	const Array* _objectStream;
	unsigned long long _objectStreamPosition;
	const HashSet<const void *, WTF::PtrHash<const void *>, WTF::HashTraits<const void *> >* _allowedClasses;

}
-(BOOL)allowsKeyedCoding;
-(const char*)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2 ;
-(long long)decodeInt64ForKey:(id)arg1 ;
-(id)allowedClasses;
-(id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 ;
-(BOOL)containsValueForKey:(id)arg1 ;
-(int)decodeInt32ForKey:(id)arg1 ;
-(long long)decodeIntegerForKey:(id)arg1 ;
-(void)decodeValueOfObjCType:(const char*)arg1 at:(void*)arg2 ;
-(id)decodeObjectForKey:(id)arg1 ;
-(int)decodeIntForKey:(id)arg1 ;
-(double)decodeDoubleForKey:(id)arg1 ;
-(BOOL)decodeBoolForKey:(id)arg1 ;
-(BOOL)requiresSecureCoding;
-(float)decodeFloatForKey:(id)arg1 ;
-(id)initWithInterface:(id)arg1 rootObjectDictionary:(const Dictionary*)arg2 replyToSelector:(SEL)arg3 ;
@end

