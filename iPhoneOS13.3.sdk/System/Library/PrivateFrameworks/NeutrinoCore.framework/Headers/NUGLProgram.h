//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUGLObject.h>

@class NSDictionary, NSError, NUGLShader;

@interface NUGLProgram : NUGLObject
{
    long long _buildStatus;
    NSError *_buildError;
    NSDictionary *_uniforms;
    NSDictionary *_attributes;
    NUGLShader *_shader;
}

@property(readonly) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly) NSDictionary *uniforms; // @synthesize uniforms=_uniforms;
@property(readonly) NUGLShader *shader; // @synthesize shader=_shader;
// - (void).cxx_destruct;
- (void)_build:(id)arg1;
- (BOOL)build:(id)arg1 error:(out id )arg2;
- (void)delete;
- (void)generate:(id)arg1;
- (id)init;
- (id)initWithShader:(id)arg1;

@end

