//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/EQKitMathMLNode.h>

#import <iWorkImport/EQKitMathMLNode-Protocol.h>

__attribute__((visibility("hidden")))
@interface EQKitMathMLUnaryNode : EQKitMathMLNode <EQKitMathMLNode>
{
    EQKitMathMLNode *mChild;
}

- (void)dealloc;
- (BOOL)isBaseFontNameUsed;
- (const set_25e6ba53 )mathMLAttributes;
- (id)initFromXMLNode:(struct _xmlNode )arg1 parser:(id)arg2;
- (id)initWithChildren:(id)arg1;
- (id)initWithChild:(id)arg1;
- (id)init;

@end

