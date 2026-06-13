program JusterVP_Manager;

uses sysutils;

begin
  Writeln('--- Juster System: VP Manager Active ---');
  
  { The Manager checks the environment before allowing work }
  if FileExists('src_cpp/engine.cpp') then
    begin
      Writeln('[VP COMMAND]: Engine detected. Authorizing execution...');
      { Execute the C++ engine }
      ExecuteProcess('./juster_engine', '');
    end
  else
    begin
      Writeln('[VP ERROR]: Engine missing. Halting all operations.');
    end;
    
  Writeln('--- Management Review Complete ---');
end.
